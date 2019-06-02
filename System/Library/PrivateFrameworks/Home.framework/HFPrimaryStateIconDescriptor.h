/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString;

@interface HFPrimaryStateIconDescriptor : NSObject <HFIconDescriptor> {

	NSString* _identifier;
	long long _primaryState;

}

@property (nonatomic,readonly) long long primaryState;              //@synthesize primaryState=_primaryState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 primaryState:(long long)arg2 ;
-(long long)primaryState;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

