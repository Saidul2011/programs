document.addEventListener('DOMContentLoaded', function () {
    const audioPlayer = document.getElementById('audioPlayer');
    const songListElement = document.getElementById('songList');
  
    const songs = [
      { title: 'Song 1', source: 'song1.mp3' },
      { title: 'Song 2', source: 'song2.mp3' },
      // Add more songs as needed
    ];
  
    // Populate the song list
    songs.forEach((song, index) => {
      const listItem = document.createElement('li');
      listItem.textContent = song.title;
      listItem.addEventListener('click', () => playSong(index, listItem));
      songListElement.appendChild(listItem);
    });
  
    // Function to play a song
    function playSong(index, listItem) {
      const selectedSong = songs[index];
  
      // Stop the currently playing song
      audioPlayer.pause();
      audioPlayer.currentTime = 0;
  
      // Set the new song source and play it
      audioPlayer.src = selectedSong.source;
      audioPlayer.play();
  
      // Highlight the selected song in the playlist
      clearPlaylistSelection();
      listItem.classList.add('active');
    }
  
    // Function to clear playlist selection
    function clearPlaylistSelection() {
      const playlistItems = document.querySelectorAll('#songList li');
      playlistItems.forEach(item => item.classList.remove('active'));
    }
  });
  