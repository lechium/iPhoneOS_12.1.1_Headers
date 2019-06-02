/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging> {

	BOOL _valid;
	NSString* _name;

}

@property (getter=isValid) BOOL valid;                               //@synthesize valid=_valid - In the implementation block
@property (copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * uniqueDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)bundleIdentifier;
-(NSString *)uniqueDescription;
-(void)mark;
-(id)logIdentifier;
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(BOOL)isValid;
@end

