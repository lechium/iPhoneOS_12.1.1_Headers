/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface CKDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(void)performMigrationIfNecessary;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)groupHashForHandleIDs:(id)arg1 ;
-(id)groupHashForChat:(id)arg1 ;
-(id)currentList;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 syncToWatch:(BOOL)arg3 ;
-(void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToWatch:(BOOL)arg4 ;
-(void)syncToWatchIncludingVersion:(BOOL)arg1 ;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(id)_deprecated_globalIdentifierForChat:(id)arg1 ;
-(BOOL)isMutedChat:(id)arg1 ;
-(BOOL)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(void)_handleDNDListChanged;
-(NPSManager *)syncManager;
-(id)init;
-(void)dealloc;
@end

