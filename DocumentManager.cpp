#include "DocumentManager.h"

void DocumentManager::addDocument(string name, int id, int license_limit) {
    nametoid[name] = id;

    idtopatrons[id] = {license_limit, unordered_set<int>()};
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(string name) {
    if(nametoid.find(name) == nametoid.end())
        return -1;
    return nametoid[name];
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if(docid < 0 || docid >= idtopatrons.size())
        return false;
    if(patrons.find(patronID) == patrons.end())
        return false;
    if(idtopatrons[docid].second.size() >= idtopatrons[docid].first)
        return false;
    idtopatrons[docid].second.insert(patronID);
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if(docid < 0 || docid >= idtopatrons.size())
        return;
    if(idtopatrons[docid].second.find(patronID) == idtopatrons[docid].second.end())
        return;
    idtopatrons[docid].second.erase(patronID);
}