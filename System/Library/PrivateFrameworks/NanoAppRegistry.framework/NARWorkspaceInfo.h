/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID, NSNumber;

@interface NARWorkspaceInfo : NSObject <NSSecureCoding> {

	NSArray* _applications;
	NSUUID* _UUID;
	NSNumber* _sequenceNumber;
	NSArray* _standaloneGlances;

}

@property (nonatomic,readonly) NSArray * applications;                   //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSNumber * sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneGlances;              //@synthesize standaloneGlances=_standaloneGlances - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)sequenceNumber;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 ;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 standaloneGlances:(id)arg4 ;
-(NSArray *)standaloneGlances;
-(NSArray *)applications;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
