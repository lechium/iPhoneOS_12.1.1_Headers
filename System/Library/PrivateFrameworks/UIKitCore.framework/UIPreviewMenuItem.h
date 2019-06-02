/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, UIImage, UIColor;

@interface UIPreviewMenuItem : NSObject <NSCopying> {

	NSString* identifier;
	NSString* _title;
	/*^block*/id _handler;
	long long _style;
	NSArray* __subitems;
	UIImage* _image;
	UIColor* _color;

}

@property (nonatomic,copy) id handler;                                                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (setter=_setSubitems:,getter=_subitems,nonatomic,copy) NSArray * _subitems;              //@synthesize _subitems=__subitems - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3 ;
+(id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)itemWithViewControllerPreviewAction:(id)arg1 ;
-(NSString *)identifier;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_color;
-(void)_setColor:(id)arg1 ;
-(NSArray *)_subitems;
-(void)_setSubitems:(id)arg1 ;
@end

