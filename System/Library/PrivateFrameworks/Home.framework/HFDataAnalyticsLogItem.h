/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFMediaProfileContainer;
@class NSString;

@interface HFDataAnalyticsLogItem : HFItem <NAIdentifiable> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSString* _name;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)initWithMediaProfileContainer:(id)arg1 name:(id)arg2 ;
-(BOOL)isDisplayDisabled;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)fetchLog;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
@end
