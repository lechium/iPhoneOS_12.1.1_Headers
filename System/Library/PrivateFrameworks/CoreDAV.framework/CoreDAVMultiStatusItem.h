/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem {

	NSMutableArray* _orderedResponses;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,readonly) NSSet * responses; 
@property (nonatomic,retain) NSMutableArray * orderedResponses;                  //@synthesize orderedResponses=_orderedResponses - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(void)addResponse:(id)arg1 ;
-(NSSet *)responses;
-(NSMutableArray *)orderedResponses;
-(void)setOrderedResponses:(NSMutableArray *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)responseDescription;
-(id)init;
-(id)description;
@end
