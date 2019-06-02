/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RCMutableRecording.h>

@class AVAsset, NSString, NSDate, NSURL, CLLocation;

@interface RCCloudRecording : NSManagedObject <RCMutableRecording> {

	AVAsset* _avAsset;

}

@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) id<_NSFileBackedFuture> audioFuture; 
@property (nonatomic,copy) NSString * uniqueID; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * evictionDate; 
@property (nonatomic,copy) NSString * customLabel; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long iTunesPersistentID; 
@property (assign,nonatomic) BOOL synced; 
@property (assign,nonatomic) BOOL pendingRestore; 
@property (assign,nonatomic) BOOL evicted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleDisallowingEmptyString; 
@property (nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) BOOL manuallyRenamed; 
@property (nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) BOOL uploaded; 
@property (nonatomic,readonly) AVAsset * avAsset; 
+(id)playablePredicate;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(void)willSave;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(void)setPlayable:(BOOL)arg1 ;
-(BOOL)synced;
-(id)_detailLabel;
-(NSURL *)URIRepresentation;
-(id)searchableItem;
-(BOOL)uploaded;
-(AVAsset *)avAsset;
-(void)setSynced:(BOOL)arg1 ;
-(BOOL)pendingRestore;
-(void)setPendingRestore:(BOOL)arg1 ;
-(void)setEvicted:(BOOL)arg1 ;
-(BOOL)isContentBeingModified;
-(NSString *)titleDisallowingEmptyString;
-(BOOL)playable;
-(BOOL)manuallyRenamed;
-(BOOL)evicted;
-(void)setManuallyRenamed:(BOOL)arg1 ;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(void)_validatePath;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(id)_activityURLCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)synchronizeWithExistingAudioFuture:(id*)arg1 ;
-(id)name;
-(void)setName:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSURL *)url;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
@end

