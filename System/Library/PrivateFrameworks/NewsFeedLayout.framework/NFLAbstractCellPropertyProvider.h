/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFLFontCache, NSSet, NSString;

@interface NFLAbstractCellPropertyProvider : NSObject {

	id* _propertiesByColumnSpan;
	unsigned long long propertiesByColumnSpanSize;
	double _scaleValue;
	NFLFontCache* _fontCache;
	NSSet* _supportedColumnSpans;
	Class _propertyClass;
	NSString* _plistName;

}

@property (assign,nonatomic) Class propertyClass;                         //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,retain) NSString * plistName;                        //@synthesize plistName=_plistName - In the implementation block
@property (nonatomic,readonly) double scaleValue;                         //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) NFLFontCache * fontCache;                  //@synthesize fontCache=_fontCache - In the implementation block
@property (nonatomic,readonly) NSSet * supportedColumnSpans;              //@synthesize supportedColumnSpans=_supportedColumnSpans - In the implementation block
+(id)plistProvider;
+(id)publisherTitleFontLarge;
+(id)publisherTitleFontSmall;
-(NSString *)plistName;
-(void)setPlistName:(NSString *)arg1 ;
-(double)scaleValue;
-(Class)propertyClass;
-(id)propertiesIrrespectiveToColumnSpan;
-(id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5 ;
-(id)propertiesForColumnSpan:(long long)arg1 ;
-(NSSet *)supportedColumnSpans;
-(void)setPropertyClass:(Class)arg1 ;
-(NFLFontCache *)fontCache;
-(id)init;
-(void)dealloc;
@end
