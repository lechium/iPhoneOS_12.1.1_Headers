/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUQuickControlItemPredicate.h>

@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                   //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfMatches; 
+(id)predicateWithControlItemClass:(Class)arg1 ;
-(BOOL)matchesControlItem:(id)arg1 ;
-(id)matchingControlItemsForControlItems:(id)arg1 ;
-(unsigned long long)maximumNumberOfMatches;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

