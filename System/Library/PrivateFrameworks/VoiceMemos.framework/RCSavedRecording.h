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
#import <UIKit/UIActivityItemSource.h>

@class NSDate, NSString, CLLocation, AVAsset, CSSearchableItem, NSURL;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording, UIActivityItemSource> {

	AVAsset* _avAsset;
	BOOL _pathWasInvalid;
	BOOL _ignoreChangeForEntityRevision;
	BOOL _hasPendingChangeAffectingEntityRevision;
	long long revisionID;

}

@property (nonatomic,copy,readonly) CSSearchableItem * searchableItem; 
@property (assign,nonatomic) long long recordingID; 
@property (assign,nonatomic) long long revisionID; 
@property (nonatomic,readonly) BOOL hasPendingChangeAffectingEntityRevision;              //@synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,copy,readonly) NSDate * evictionDate; 
@property (nonatomic,copy,readonly) NSString * path; 
@property (nonatomic,copy,readonly) NSURL * URIRepresentation; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleDisallowingEmptyString; 
@property (nonatomic,copy,readonly) NSString * customLabel; 
@property (nonatomic,copy,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) long long iTunesPersistentID; 
@property (nonatomic,readonly) BOOL synced; 
@property (nonatomic,readonly) BOOL pendingRestore; 
@property (nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) BOOL manuallyRenamed; 
@property (nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) BOOL evicted; 
@property (nonatomic,readonly) BOOL uploaded; 
@property (nonatomic,readonly) AVAsset * avAsset; 
+(id)localizedStringForRecordingLabel:(long long)arg1 ;
+(id)propertiesAffectingEntityRevision;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg1 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg1 ;
-(void)setCustomLabel:(NSString *)arg1 ;
-(NSString *)customLabel;
-(void)willSave;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(void)setPlayable:(BOOL)arg1 ;
-(id)detailLabel;
-(NSURL *)URIRepresentation;
-(CSSearchableItem *)searchableItem;
-(BOOL)uploaded;
-(AVAsset *)avAsset;
-(long long)revisionID;
-(long long)recordingID;
-(void)setRevisionID:(long long)arg1 ;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1 ;
-(NSDate *)evictionDate;
-(BOOL)isContentBeingModified;
-(NSString *)titleDisallowingEmptyString;
-(BOOL)playable;
-(BOOL)manuallyRenamed;
-(BOOL)evicted;
-(void)setManuallyRenamed:(BOOL)arg1 ;
-(void)setEvictionDate:(NSDate *)arg1 ;
-(void)setLabelPreset:(long long)arg1 ;
-(void)_validatePath;
-(id)_labelAllowingEmptyString:(BOOL)arg1 ;
-(long long)labelPreset;
-(id)_activityURLCreateIfNecessary:(BOOL)arg1 ;
-(void)setRecordingID:(long long)arg1 ;
-(BOOL)hasPendingChangeAffectingEntityRevision;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(double)duration;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(NSString *)path;
-(id)label;
-(void)setPath:(NSString *)arg1 ;
-(NSURL *)url;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
@end

