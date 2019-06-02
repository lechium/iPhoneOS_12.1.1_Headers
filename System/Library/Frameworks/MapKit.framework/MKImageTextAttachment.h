/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@interface MKImageTextAttachment : NSTextAttachment {

	double _verticalOffset;

}

@property (assign,nonatomic) double verticalOffset;              //@synthesize verticalOffset=_verticalOffset - In the implementation block
-(id)initWithImage:(id)arg1 verticalOffset:(double)arg2 ;
-(void)setVerticalOffset:(double)arg1 ;
-(double)verticalOffset;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
@end

