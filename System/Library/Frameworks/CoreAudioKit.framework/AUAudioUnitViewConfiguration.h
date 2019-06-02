/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding> {

	BOOL _hostHasController;
	double _width;
	double _height;

}

@property (nonatomic,readonly) double width;                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL hostHasController;              //@synthesize hostHasController=_hostHasController - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hostHasController;
-(id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(double)width;
-(double)height;
@end

