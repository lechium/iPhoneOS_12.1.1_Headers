/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CXHandle, NSString;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding> {

	CXHandle* _handle;
	NSString* _label;

}

@property (nonatomic,retain) CXHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * label;                 //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(CXHandle *)handle;
-(id)initWithHandle:(id)arg1 label:(id)arg2 ;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
-(void)setHandle:(CXHandle *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

