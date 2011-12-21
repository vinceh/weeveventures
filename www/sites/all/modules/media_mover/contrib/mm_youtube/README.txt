
Media Mover Youtube upload is a module which adds a storage action to Media Mover which enables a site to upload videos to a Youtube account.

It was developed by Alexandru Badiu (i@voidberg.org) and was sponsored by Adulmec.ro (http://adulmec.ro).

Dependencies
------------
- Media Mover
- Zend GData Library

Installation
------------
- Download the Zend GData client library from http://framework.zend.com/download/gdata/
- Extract the tar archive and move the subdirectory library/Zend into the module directory.
- Enable the module via admin/build/modules

Usage
-----
- Create a Media Mover configuration and choose for storage the "Upload video to Youtube." action.
- Make sure the configuration acts on video files.
- Configure the settings (credentials, default values).
- Enjoy.

Integration
-----------
The action returns the youtube id of the clip. You can get the url of the clip by appending the id to 'http://youtube.com/watch?v='.