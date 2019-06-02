/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonIMAPNotes/DADaemonIMAPNotes-Structs.h>
#import <Message/MFMessageLibrary.h>

@class IMAPAccount, DAIMAPNotesDaemonAccount, NoteContext;

@interface IMAPNotesLibrary : MFMessageLibrary {

	IMAPAccount* _account;
	DAIMAPNotesDaemonAccount* _notesAccount;
	NoteContext* _noteContext;

}

@property (assign,nonatomic,__weak) IMAPAccount * account;                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) DAIMAPNotesDaemonAccount * notesAccount;              //@synthesize notesAccount=_notesAccount - In the implementation block
@property (nonatomic,retain) NoteContext * noteContext;                                   //@synthesize noteContext=_noteContext - In the implementation block
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(BOOL)isMessageContentsLocallyAvailable:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(id)messageWithMessageID:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(void)compactMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(void)compactMessages:(id)arg1 permanently:(BOOL)arg2 ;
-(IMAPAccount *)account;
-(NoteContext *)noteContext;
-(DAIMAPNotesDaemonAccount *)notesAccount;
-(void)setNoteContext:(NoteContext *)arg1 ;
-(void)setNotesAccount:(DAIMAPNotesDaemonAccount *)arg1 ;
-(void)setAccount:(IMAPAccount *)arg1 ;
-(void)removeAllMessagesFromMailbox:(id)arg1 andNotify:(BOOL)arg2 ;
@end

