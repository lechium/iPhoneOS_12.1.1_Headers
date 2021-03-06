/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SXColumnLayout, NSString;

@interface SXLayoutAttributes : NSObject <NSCopying> {

	SXColumnLayout* _columnLayout;
	NSString* _contentSizeCategory;
	UIEdgeInsets _safeAreaInsets;

}

@property (nonatomic,readonly) SXColumnLayout * columnLayout;               //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                   //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
-(NSString *)contentSizeCategory;
-(SXColumnLayout *)columnLayout;
-(id)initWithColumnLayout:(id)arg1 contentSizeCategory:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
@end

