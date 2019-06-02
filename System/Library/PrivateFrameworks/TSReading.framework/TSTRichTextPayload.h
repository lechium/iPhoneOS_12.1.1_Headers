/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {

	TSWPStorage* mStorage;

}

@property (nonatomic,retain) TSWPStorage * storage; 
-(id)initWithStorage:(id)arg1 ;
-(TSWPStorage *)storage;
-(id)copyWithContext:(id)arg1 ;
-(void)setStorage:(TSWPStorage *)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 ;
-(BOOL)requiresRichText;
-(void)dealloc;
-(id)string;
@end

