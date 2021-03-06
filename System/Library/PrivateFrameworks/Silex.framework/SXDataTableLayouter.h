/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXDataTableDataSource;
#import <Silex/Silex-Structs.h>
@class SXDataTableBlueprint, NSMutableDictionary;

@interface SXDataTableLayouter : NSObject {

	id<SXDataTableDataSource> _dataSource;
	double _currentWidth;
	SXDataTableBlueprint* _blueprint;
	NSMutableDictionary* _minimumColumnWidths;
	NSMutableDictionary* _intendedColumnWidths;

}

@property (nonatomic,retain) SXDataTableBlueprint * blueprint;                        //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * minimumColumnWidths;               //@synthesize minimumColumnWidths=_minimumColumnWidths - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * intendedColumnWidths;              //@synthesize intendedColumnWidths=_intendedColumnWidths - In the implementation block
@property (nonatomic,readonly) id<SXDataTableDataSource> dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) double currentWidth;                                   //@synthesize currentWidth=_currentWidth - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(id)blueprintForWidth:(double)arg1 ;
-(double)currentWidth;
-(id)layoutDataTableForWidth:(double)arg1 ;
-(NSMutableDictionary *)minimumColumnWidths;
-(NSMutableDictionary *)intendedColumnWidths;
-(double)totalColumnDividerWidth;
-(double)totalTableBorderWidth;
-(id)columnWidthsForWidth:(double)arg1 resultingTableWidth:(double*)arg2 ;
-(id)rowHeightsForColumnWidths:(id)arg1 ;
-(id)blueprintUsingRowHeights:(id)arg1 columnWidths:(id)arg2 andTableWidth:(double)arg3 ;
-(UIEdgeInsets)tableInsets;
-(double)minimumWidthForColumnAtIndex:(unsigned long long)arg1 ;
-(double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)arg1 ;
-(double)totalTableBorderHeight;
-(void)setMinimumColumnWidths:(NSMutableDictionary *)arg1 ;
-(void)setIntendedColumnWidths:(NSMutableDictionary *)arg1 ;
-(SXDataTableBlueprint *)blueprint;
-(void)setBlueprint:(SXDataTableBlueprint *)arg1 ;
-(void)reset;
-(id<SXDataTableDataSource>)dataSource;
@end

