/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@interface NSSpellCheckingResult : NSTextCheckingResult {

	NSRange _range;

}
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(unsigned long long)resultType;
-(id)initWithRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
@end

