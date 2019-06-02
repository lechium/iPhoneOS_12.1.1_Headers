/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {

	NSMutableSet* _created;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;
	NSMutableSet* _collectionChanges;
	NSMutableSet* _collectionUpdates;
	ICSDateValue* _dtstamp;

}

@property (nonatomic,retain) NSMutableSet * created;                        //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSMutableSet * updated;                        //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSMutableSet * deleted;                        //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionChanges;              //@synthesize collectionChanges=_collectionChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionUpdates;              //@synthesize collectionUpdates=_collectionUpdates - In the implementation block
@property (nonatomic,retain) ICSDateValue * dtstamp;                        //@synthesize dtstamp=_dtstamp - In the implementation block
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(NSMutableSet *)updated;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(NSMutableSet *)deleted;
-(void)setCreated:(NSMutableSet *)arg1 ;
-(NSMutableSet *)created;
-(id)copyParseRules;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(NSMutableSet *)collectionChanges;
-(void)setCollectionChanges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)collectionUpdates;
-(void)setCollectionUpdates:(NSMutableSet *)arg1 ;
-(void)addCreated:(id)arg1 ;
-(void)addUpdated:(id)arg1 ;
-(void)addDeleted:(id)arg1 ;
-(void)addCollectionChanges:(id)arg1 ;
-(void)addCollectionUpdates:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(ICSDateValue *)dtstamp;
-(id)init;
@end

