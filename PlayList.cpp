#include "PlayList.hpp"
#include "Set.hpp"
#include <iostream>

using namespace std;


PlayList::PlayList(const Song& a_song)

{
    // insert() funciton adds the element to the set
    playlist_.add(a_song);

}

int PlayList::getNumberOfSongs() const{
	return playlist_.getCurrentSize();
}

bool PlayList::isEmpty() const{
	if(playlist_.size() == 0){
		return true;
	}
	return false;
}

bool PlayList::addSong(const Song& new_song){
	if(playlist_.add(new_song) == true){
		return true;
	}
	return false;
}

bool PlayList::removeSong(const Song& a_song){
	if(playlist_.remove(a_song) == 0){
		return true;
	}
	return false;

}

void PlayList::clearPlayList()
{
    // clear function removes all elements from set
    playlist_.clear();
}



void PlayList::displayPlayList() const{

	playlist_.toVector();

}









