/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NULayoutContext.h>
@class UITraitCollection;


@protocol NULayoutContext <NSObject>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds; 
@required
-(BOOL)isLandscape;
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;

@end


@class UITraitCollection, NSString;

@interface NULayoutContext : NSObject <NULayoutContext> {

	UITraitCollection* _traitCollection;
	CGRect _bounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds;                                    //@synthesize bounds=_bounds - In the implementation block
-(BOOL)isLandscape;
-(id)initWithTraitCollection:(id)arg1 bounds:(CGRect)arg2 ;
-(CGRect)bounds;
-(NSString *)description;
-(UITraitCollection *)traitCollection;
@end
