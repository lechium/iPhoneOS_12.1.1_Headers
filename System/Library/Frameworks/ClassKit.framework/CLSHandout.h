/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString, NSDate, NSError, CLSClass, NSArray;

@interface CLSHandout : CLSObject <CLSRelationable> {

	NSString* _title;
	NSString* _instructions;
	NSDate* _dueDate;
	BOOL _reviewed;
	NSDate* _dateOfPublication;
	NSDate* _dateLastReviewed;
	long long _state;
	long long _publishingState;
	NSError* _publishError;

}

@property (nonatomic,readonly) CLSClass * effectiveClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * dateOfPublication;                   //@synthesize dateOfPublication=_dateOfPublication - In the implementation block
@property (assign,nonatomic) long long state;                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long publishingState;                    //@synthesize publishingState=_publishingState - In the implementation block
@property (nonatomic,retain) NSError * publishError;                       //@synthesize publishError=_publishError - In the implementation block
@property (nonatomic,retain) NSDate * dateLastReviewed;                    //@synthesize dateLastReviewed=_dateLastReviewed - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * instructions; 
@property (nonatomic,retain) NSDate * dueDate; 
@property (nonatomic,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (assign,getter=isReviewed,nonatomic) BOOL reviewed; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(void)setInstructions:(NSString *)arg1 ;
-(NSString *)instructions;
-(NSArray *)recipients;
-(void)mergeWithObject:(id)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSDate *)dueDate;
-(BOOL)validateObject:(id*)arg1 ;
-(BOOL)isReviewed;
-(long long)publishingState;
-(void)setReviewed:(BOOL)arg1 ;
-(void)addHandoutAttachment:(id)arg1 ;
-(void)removeHandoutAttachment:(id)arg1 ;
-(void)addHandoutRecipient:(id)arg1 ;
-(void)removeHandoutRecipient:(id)arg1 ;
-(NSDate *)dateOfPublication;
-(void)setDateOfPublication:(NSDate *)arg1 ;
-(NSDate *)dateLastReviewed;
-(void)setDateLastReviewed:(NSDate *)arg1 ;
-(void)setPublishingState:(long long)arg1 ;
-(NSError *)publishError;
-(void)setPublishError:(NSError *)arg1 ;
-(CLSClass *)effectiveClass;
-(id)init;
-(NSArray *)attachments;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)state;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setState:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)_init;
@end

