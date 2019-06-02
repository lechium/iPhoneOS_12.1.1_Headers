/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PSMagnifyMode : NSObject <NSCopying> {

	BOOL _zoomed;
	NSString* _localizedName;
	NSString* _name;
	NSArray* _previewHTMLStrings;
	NSArray* _previewStyleSheets;
	CGSize _size;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * previewHTMLStrings;              //@synthesize previewHTMLStrings=_previewHTMLStrings - In the implementation block
@property (nonatomic,retain) NSArray * previewStyleSheets;              //@synthesize previewStyleSheets=_previewStyleSheets - In the implementation block
@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                  //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,getter=isZoomed,nonatomic) BOOL zoomed;               //@synthesize zoomed=_zoomed - In the implementation block
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(BOOL)arg4 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSArray *)previewHTMLStrings;
-(void)setPreviewHTMLStrings:(NSArray *)arg1 ;
-(NSArray *)previewStyleSheets;
-(void)setPreviewStyleSheets:(NSArray *)arg1 ;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)localizedName;
-(BOOL)isZoomed;
-(void)setZoomed:(BOOL)arg1 ;
@end
