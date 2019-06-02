/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBBundleIDMapping, NSDictionary;

@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBBundleIDMapping* _pbBundleIDMapping;
	NSDictionary* _bundleIDMapping;

}

@property (nonatomic,retain) NSDictionary * bundleIDMapping;              //@synthesize bundleIDMapping=_bundleIDMapping - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)decendingSpecificityBundleIDsForBundleID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)jsonEncodableObject;
-(id)initWithPBBundleIDMapping:(id)arg1 ;
-(NSDictionary *)bundleIDMapping;
-(id)tagScoresForBundleID:(id)arg1 ;
-(void)setBundleIDMapping:(NSDictionary *)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
