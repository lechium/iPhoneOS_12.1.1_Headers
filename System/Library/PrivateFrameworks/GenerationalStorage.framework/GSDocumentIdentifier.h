/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned char volumeUUID[16];
	unsigned long long documentID;
	int deviceID;

}
+(BOOL)supportsSecureCoding;
-(id)initWithDocumentIdentifier:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

