/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class NSArray;

@interface TSPObjectContainer : TSPObject {

	unsigned char _packageIdentifier;
	NSArray* _childObjects;

}
+(long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1 ;
-(id)packageLocator;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(long long)tsp_identifier;
-(id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2 ;
-(void)prepareForComponentWriteWithDelayedObjects:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

