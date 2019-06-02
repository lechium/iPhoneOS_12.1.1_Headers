/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardPerson;
#import <vCard/vCard-Structs.h>
@class CNVCardWritingOptions;

@interface CNVCard30PHOTOHelper : NSObject {

	id<CNVCardPerson> _person;
	CNVCardWritingOptions* _options;
	unsigned long long _maxBytes;

}

@property (nonatomic,readonly) id<CNVCardPerson> person;                     //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) CNVCardWritingOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBytes;                  //@synthesize maxBytes=_maxBytes - In the implementation block
-(id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3 ;
-(id)bestEffortImage;
-(unsigned long long)maxBytes;
-(id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3 ;
-(id)compressImage:(id)arg1 allowableCompressions:(id)arg2 ;
-(id)scaleImage:(id)arg1 toFit:(CGSize)arg2 allowableCompressionQuality:(id)arg3 ;
-(id)largeImage;
-(id)init;
-(id)description;
-(id)image;
-(CNVCardWritingOptions *)options;
-(id<CNVCardPerson>)person;
@end

