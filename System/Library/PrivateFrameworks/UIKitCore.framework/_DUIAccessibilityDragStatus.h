/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding> {

	BOOL _forbidden;
	long long _itemCount;
	unsigned long long _potentialOperation;

}

@property (assign,nonatomic) long long itemCount;                                //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long potentialOperation;              //@synthesize potentialOperation=_potentialOperation - In the implementation block
@property (assign,nonatomic) BOOL forbidden;                                     //@synthesize forbidden=_forbidden - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)itemCount;
-(void)setForbidden:(BOOL)arg1 ;
-(BOOL)forbidden;
-(void)setItemCount:(long long)arg1 ;
-(unsigned long long)potentialOperation;
-(void)setPotentialOperation:(unsigned long long)arg1 ;
@end
