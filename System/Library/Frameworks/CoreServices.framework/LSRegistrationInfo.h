/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface LSRegistrationInfo : NSObject <NSSecureCoding, NSMutableCopying> {

	unsigned version;
	unsigned action;
	unsigned options;
	unsigned itemFlags;
	unsigned containerUnit;
	unsigned bundleUnit;
	unsigned bundleClass;
	unsigned long long inoBundle;
	unsigned long long inoExec;
	unsigned userID;
	double contentModDate;
	unsigned long long volumeIdentifier;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

