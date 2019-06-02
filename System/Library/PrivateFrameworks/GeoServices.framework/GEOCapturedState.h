/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface GEOCapturedState : NSObject <NSKeyedArchiverDelegate, NSSecureCoding>

@property (readonly) const char* decoderType; 
@property (readonly) NSData * stateData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)decoderType;
+(id)fromStateData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(const char*)decoderType;
-(NSData *)stateData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
@end

