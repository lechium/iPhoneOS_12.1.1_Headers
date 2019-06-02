/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RTTUtilities/RTTUtilities-Structs.h>
@class CHManager, AXCloudKitHelper, NSManagedObjectContext;

@interface RTTDatabaseHelper : NSObject {

	sqlite3Ref _database;
	CHManager* _callHistoryManager;
	AXCloudKitHelper* _cloudKitHelper;
	int _contentProtectionNotifyToken;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedHelper;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)ttyDirectoryPath;
-(id)ttyDatabaseFilePath;
-(void)storesWillChange:(id)arg1 ;
-(void)contentDidUpdate:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(BOOL)deleteConversationsWithCallUIDs:(id)arg1 ;
-(BOOL)saveIfPossible;
-(BOOL)contactPathWasUsedForTTY:(id)arg1 ;
-(BOOL)contactIDIsTTYContact:(id)arg1 ;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)saveConversation:(id)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)setupDatabase;
-(id)init;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)isProtectedDataAvailable;
@end

