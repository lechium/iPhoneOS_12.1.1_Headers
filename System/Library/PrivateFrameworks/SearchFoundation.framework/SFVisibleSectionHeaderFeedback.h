/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback {

	SFResultSection* _section;
	unsigned long long _headerType;

}

@property (nonatomic,copy) SFResultSection * section;                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;              //@synthesize headerType=_headerType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(unsigned long long)headerType;
-(id)initWithSection:(id)arg1 headerType:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFResultSection *)section;
-(void)setSection:(SFResultSection *)arg1 ;
@end

