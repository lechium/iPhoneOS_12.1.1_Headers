/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>

@class NSString, NSNumber, NSDate, NoteBodyObject, NSSet, NoteStoreObject, NSURL, NSData;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,retain) NSNumber * externalFlags; 
@property (nonatomic,retain) NSNumber * externalServerIntId; 
@property (nonatomic,retain) NSNumber * deletedFlag; 
@property (nonatomic,retain) NSNumber * externalSequenceNumber; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * contentType; 
@property (nonatomic,retain) NSNumber * containsCJK; 
@property (nonatomic,retain) NoteBodyObject * body; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (assign,nonatomic) BOOL isPlainText; 
@property (nonatomic,readonly) NSURL * noteId; 
@property (nonatomic,readonly) BOOL isMarkedForDeletion; 
@property (nonatomic,readonly) BOOL isBeingMarkedForDeletion; 
@property (nonatomic,retain) NSNumber * isBookkeepingEntry; 
@property (nonatomic,retain) NSString * serverId; 
@property (nonatomic,readonly) BOOL hasValidServerIntId; 
@property (assign,nonatomic) long long serverIntId; 
@property (nonatomic,retain,readonly) NSString * guid; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
+(BOOL)didChooseToMigrateNote:(id)arg1 context:(NoteContext*)arg2 ;
-(unsigned long long)searchResultType;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(unsigned long long)flags;
-(void)setContent:(NSString *)arg1 ;
-(BOOL)containsAttachments;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(id)contentAsPlainTextPreservingNewlines;
-(long long)serverIntId;
-(NSString *)externalContentRef;
-(void)setExternalContentRef:(NSString *)arg1 ;
-(BOOL)isBeingMarkedForDeletion;
-(NSURL *)noteId;
-(void)setServerIntId:(long long)arg1 ;
-(BOOL)hasValidServerIntId;
-(BOOL)belongsToCollection:(id)arg1 ;
-(id)folderName;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSString *)contentAsPlainText;
-(id)defaultTitleForEmptyNote;
-(BOOL)isPasswordProtected;
-(id)accountName;
-(id)dataForTypeIdentifier:(id)arg1 ;
-(BOOL)isSharedViaICloud;
-(BOOL)isPlainText;
-(BOOL)isMarkedForDeletion;
-(void)markForDeletion;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchableItemIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;
-(BOOL)ignoreInSearchIndexer;
-(id)searchableContentKeyPaths;
-(id)trimmedTitle;
-(id)noteAsPlainTextWithoutTitle;
-(id)contentInfoText;
-(id)dateForCurrentSortType;
-(BOOL)isModernNote;
-(void)setIsPlainText:(BOOL)arg1 ;
-(id)identifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)content;
@end

