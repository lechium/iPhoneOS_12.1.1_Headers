/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HFChildServiceFilter : NSObject {

	NSSet* _childServiceTypes;

}

@property (nonatomic,copy,readonly) NSSet * childServiceTypes;              //@synthesize childServiceTypes=_childServiceTypes - In the implementation block
-(id)initWithChildServiceTypes:(id)arg1 ;
-(NSSet *)childServiceTypes;
-(id)filteredChildServicesForParentService:(id)arg1 ;
@end
