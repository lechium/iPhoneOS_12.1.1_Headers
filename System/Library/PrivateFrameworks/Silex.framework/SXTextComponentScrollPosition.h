/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {

	long long _characterIndex;
	double _relativeTextOffset;

}

@property (assign,nonatomic) long long characterIndex;               //@synthesize characterIndex=_characterIndex - In the implementation block
@property (assign,nonatomic) double relativeTextOffset;              //@synthesize relativeTextOffset=_relativeTextOffset - In the implementation block
-(long long)characterIndex;
-(double)relativeTextOffset;
-(void)setCharacterIndex:(long long)arg1 ;
-(void)setRelativeTextOffset:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

