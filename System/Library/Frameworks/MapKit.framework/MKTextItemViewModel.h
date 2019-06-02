/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MKTextItemViewModel : NSObject {

	NSArray* _values;

}

@property (nonatomic,copy) NSArray * values;              //@synthesize values=_values - In the implementation block
-(id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4 ;
-(id)stringsForRowAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
@end
