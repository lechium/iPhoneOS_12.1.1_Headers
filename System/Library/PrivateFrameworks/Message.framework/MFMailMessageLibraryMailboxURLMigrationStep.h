/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class MFSQLiteConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject {

	MFSQLiteConnection* _sqliteConnection;

}

@property (nonatomic,retain) MFSQLiteConnection * sqliteConnection;              //@synthesize sqliteConnection=_sqliteConnection - In the implementation block
-(BOOL)_renameMailboxDataFolders:(sqlite3Ref)arg1 ;
-(BOOL)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(sqlite3Ref)arg2 ;
-(void)_purgeFoldersMatchingPatterns:(id)arg1 ;
-(BOOL)_updateMailboxURLsInSQLitedb:(sqlite3Ref)arg1 withOldURLToNewURLMap:(id)arg2 ;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(BOOL)performMigrationStep;
-(MFSQLiteConnection *)sqliteConnection;
-(void)setSqliteConnection:(MFSQLiteConnection *)arg1 ;
@end

