/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer {

	NSValueTransformer* _objectValueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * objectValueTransformer;              //@synthesize objectValueTransformer=_objectValueTransformer - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(NSValueTransformer *)objectValueTransformer;
-(void)setObjectValueTransformer:(NSValueTransformer *)arg1 ;
@end
