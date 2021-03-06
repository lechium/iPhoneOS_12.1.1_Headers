/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SASTTemplateRating, NSString;

@interface SASTRatingItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SASTTemplateRating * rating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ratingItem;
+(id)ratingItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SASTTemplateRating *)rating;
-(void)setRating:(SASTTemplateRating *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

