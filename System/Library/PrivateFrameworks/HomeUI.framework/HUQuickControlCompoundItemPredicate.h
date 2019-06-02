/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUQuickControlItemPredicate.h>

@class NSArray, NSString;

@interface HUQuickControlCompoundItemPredicate : NSObject <HUQuickControlItemPredicate> {

	NSArray* _requiredSubpredicates;
	NSArray* _optionalSubpredicates;
	unsigned long long _minimumNumberOfMatchedPredicates;

}

@property (nonatomic,copy,readonly) NSArray * requiredSubpredicates;                             //@synthesize requiredSubpredicates=_requiredSubpredicates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * optionalSubpredicates;                             //@synthesize optionalSubpredicates=_optionalSubpredicates - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumNumberOfMatchedPredicates;              //@synthesize minimumNumberOfMatchedPredicates=_minimumNumberOfMatchedPredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfMatches; 
-(id)matchingControlItemsForControlItems:(id)arg1 ;
-(unsigned long long)maximumNumberOfMatches;
-(id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2 ;
-(id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2 minimumNumberOfMatchedPredicates:(unsigned long long)arg3 ;
-(NSArray *)requiredSubpredicates;
-(NSArray *)optionalSubpredicates;
-(id)allSubpredicates;
-(unsigned long long)minimumNumberOfMatchedPredicates;
-(id)init;
@end

