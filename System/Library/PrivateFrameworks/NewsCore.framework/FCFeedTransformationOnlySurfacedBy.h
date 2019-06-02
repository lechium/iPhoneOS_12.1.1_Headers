/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSSet, NSDictionary, NSString;

@interface FCFeedTransformationOnlySurfacedBy : NSObject <FCFeedTransforming> {

	NSSet* _tagIDs;
	NSDictionary* _feedContextByFeedID;

}

@property (nonatomic,copy) NSSet * tagIDs;                                  //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setTagIDs:(NSSet *)arg1 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(NSSet *)tagIDs;
@end
