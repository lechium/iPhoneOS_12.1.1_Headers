/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject {

	BOOL _isMaster;
	ICSDate* _recurrenceID;
	NSMutableDictionary* _changes;

}

@property (nonatomic,retain) NSMutableDictionary * changes;                //@synthesize changes=_changes - In the implementation block
@property (assign,nonatomic) BOOL isMaster;                                //@synthesize isMaster=_isMaster - In the implementation block
@property (nonatomic,retain) ICSDate * recurrenceID;                       //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,readonly) BOOL dateTimeChanged; 
@property (nonatomic,readonly) BOOL startTimeChanged; 
@property (nonatomic,readonly) BOOL endTimeChanged; 
@property (nonatomic,readonly) BOOL timeZoneChanged; 
@property (nonatomic,readonly) BOOL locationChanged; 
@property (nonatomic,readonly) BOOL summaryChanged; 
@property (nonatomic,readonly) BOOL urlChanged; 
@property (nonatomic,readonly) BOOL descriptionChanged; 
@property (nonatomic,readonly) BOOL statusChanged; 
@property (nonatomic,readonly) BOOL attendeesChanged; 
@property (nonatomic,readonly) BOOL attachmentsChanged; 
@property (nonatomic,readonly) BOOL recurrenceChanged; 
@property (nonatomic,readonly) BOOL participationChanged; 
@property (nonatomic,readonly) BOOL privateCommentChanged; 
@property (nonatomic,readonly) BOOL proposedStartDateChanged; 
+(id)changeWithOccurrenceID:(id)arg1 ;
+(id)changeWithItem:(id)arg1 ;
-(void)setIsMaster:(BOOL)arg1 ;
-(BOOL)locationChanged;
-(BOOL)timeZoneChanged;
-(BOOL)statusChanged;
-(BOOL)proposedStartDateChanged;
-(void)setRecurrenceID:(ICSDate *)arg1 ;
-(ICSDate *)recurrenceID;
-(BOOL)attendeesChanged;
-(BOOL)participationChanged;
-(BOOL)attachmentsChanged;
-(BOOL)summaryChanged;
-(BOOL)descriptionChanged;
-(BOOL)urlChanged;
-(BOOL)privateCommentChanged;
-(BOOL)startTimeChanged;
-(BOOL)endTimeChanged;
-(BOOL)dateTimeChanged;
-(BOOL)recurrenceChanged;
-(id)initWithOccurrenceID:(id)arg1 ;
-(void)addChangedParameter:(id)arg1 ofProperty:(id)arg2 ;
-(BOOL)didPropertyChange:(id)arg1 ;
-(BOOL)didParameterChange:(id)arg1 onProperty:(id)arg2 ;
-(NSMutableDictionary *)changes;
-(BOOL)isMaster;
-(void)setChanges:(NSMutableDictionary *)arg1 ;
-(void)addChangedProperty:(id)arg1 ;
-(id)init;
@end

