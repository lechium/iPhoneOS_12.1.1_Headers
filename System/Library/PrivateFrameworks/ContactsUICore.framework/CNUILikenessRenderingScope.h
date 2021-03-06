/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsUICore/ContactsUICore-Structs.h>
@interface CNUILikenessRenderingScope : NSObject {

	BOOL _rightToLeft;
	double _scale;
	unsigned long long _style;
	CGSize _pointSize;

}

@property (nonatomic,readonly) CGSize pointSize;                      //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL rightToLeft;                      //@synthesize rightToLeft=_rightToLeft - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)renderingScopeWithPointSize:(CGSize)arg1 scale:(double)arg2 rightToLeft:(BOOL)arg3 style:(unsigned long long)arg4 ;
-(id)initWithPointSize:(CGSize)arg1 scale:(double)arg2 rightToLeft:(BOOL)arg3 style:(unsigned long long)arg4 ;
-(BOOL)rightToLeft;
-(double)scale;
-(id)description;
-(CGSize)pointSize;
-(unsigned long long)style;
@end

