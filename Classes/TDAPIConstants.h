//
//  TDApiConstants.h
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 26.10.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//



////////////////////////////////////////////////////////////////////////////////
// urls

// main protocol for urls
#define kBasicUrlProtocolFormat @"http://"

// pro user protocol for urls
#define kProUserUrlProtocolFormat @"https://"

// toodledo basic url
#define tdBasicUrlFormat @"api.toodledo.com/2";

// authentication url
#define kAuthenticationURLFormat @"/account/token.php?"

// account lookup url
#define kLookupURLFormat @"/account/lookup.php?"

// account creation url
#define kCreationURLFormat @"/account/create.php?"

// get account info url
#define kAccountInfoURLFormat @"/account/get.php?"

// get tasks url
#define kGetTasksURLFormat @"/tasks/get.php?"

// add task url
#define kAddTaskURLFormat @"/tasks/add.php?"

// edit task url
#define kEditTaskURLFormat @"/tasks/edit.php?"

// delete task url
#define kDeleteTaskURLFormat @"/tasks/delete.php?"

// get delete task url
#define kGetDeletedTaskURLFormat @"/tasks/delete.php?"

// get folders url
#define kGetFoldersURLFormat @"/folders/get.php?"

// add folder url
#define kAddFolderURLFormat @"/folders/add.php?"

// delete folder url
#define kDeleteFolderURLFormat @"/folders/delete.php"

// edit folder url
#define kEditFolderURLFormat @"/folders/edit.php?"

// get contexts url
#define kGetContextURLFormat @"/contexts/get.php?"

// add context url
#define kAddContextURLFormat @"/contexts/add.php?"

// delete context url
#define kDeleteContextURLFormat @"/contexts/delete.php?"

// edit context url
#define kEditContextURLFormat @"/contexts/edit.php?"

// get goal url
#define kGetGoalURLFormat @"/goals/get.php?"

// add goal url
#define kAddGoalURLFormat @"/goals/add.php?"

// delete goal url
#define kDeleteGoalURLFormat @"/goals/delete.php?"

// edit goal url
#define kEditGoalURLFormat @"/goals/edit.php?"

// get location url
#define kGetLocationURLFormat @"/locations/get.php?"

// add location url
#define kAddLocationURLFormat @"/locations/add.php?"

// delete location url
#define kDeleteLocationURLFormat @"/locations/delete.php?"

// edit location url
#define kEditLocationURLFormat @"/locations/edit.php?"

// get notes url
#define kGetNotesURLFormat @"/notes/get.php?"

// delete note url
#define kDeleteNotesURLFormat @"/notes/delete.php?"

// add note url
#define kAddNotesURLFormat @"/notes/add.php?"

// edit note url
#define kEditNotesURLFormat @"/notes/edit.php?"



////////////////////////////////////////////////////////////////////////////////
// parsing constants

//tagSeperator
#define kTagSeparator @","



////////////////////////////////////////////////////////////////////////////////
// log macros

// DLog is almost a drop-in replacement for NSLog for debug mode
#ifdef DEBUG
#	define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#	define DLog(...)
#endif

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

