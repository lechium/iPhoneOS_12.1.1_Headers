/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying> {

	BOOL _forbidden;
	BOOL _precise;
	BOOL _prefersFullSizePreview;
	unsigned long long _operation;

}

@property (assign,nonatomic) unsigned long long operation;              //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL forbidden;                            //@synthesize forbidden=_forbidden - In the implementation block
@property (assign,nonatomic) BOOL precise;                              //@synthesize precise=_precise - In the implementation block
@property (assign,nonatomic) BOOL prefersFullSizePreview;               //@synthesize prefersFullSizePreview=_prefersFullSizePreview - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(void)setPrecise:(BOOL)arg1 ;
-(BOOL)prefersFullSizePreview;
-(void)setPrefersFullSizePreview:(BOOL)arg1 ;
-(void)setForbidden:(BOOL)arg1 ;
-(BOOL)forbidden;
-(BOOL)precise;
@end

