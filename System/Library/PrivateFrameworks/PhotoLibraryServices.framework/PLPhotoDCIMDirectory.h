/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDCIMPath:(id)arg1 ;
-(void)lockDirectory;
-(id)nextAvailableDirectory;
-(void)unlockDirectory;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)saveUserInfo;
-(id)dcimPath;
-(void)reloadUserInfo;
-(id)miscPath;
-(id)_userInfoPath;
-(void)recreateInfoPlist;
-(id)dcfDirectories;
-(id)posterImagePath;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
-(void)dealloc;
-(id)userInfo;
@end

