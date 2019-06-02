/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOAddressObjectProtocol <NSObject>
@property (nonatomic,readonly) BOOL hasKnownAccuracy; 
@property (nonatomic,readonly) int knownAccuracy; 
@required
+(id)libraryVersion;
-(int)knownAccuracy;
-(BOOL)hasKnownAccuracy;
-(id)spokenStructuredAddress;
-(id)phoneticName;
-(id)phoneticAddress;
-(id)spokenName;
-(id)spokenAddress;
-(id)phoneticLocaleIdentifier;
-(id)shortAddress;
-(id)weatherDisplayName;
-(id)addressDictionary;
-(id)spokenAddressForLocale:(id)arg1;
-(id)venueShortAddress;
-(id)cnPostalAddress;
-(id)cityDisplayNameWithFallback:(BOOL)arg1;
-(id)initWithCurrentCountry;
-(id)fullAddressWithMultiline:(BOOL)arg1 relative:(id)arg2;
-(id)venueLabel:(long long)arg1;
-(id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
-(id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
-(id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
-(id)fullAddressWithMultiline:(BOOL)arg1;
-(id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1;
-(id)parkingDisplayName;
-(id)venueLabel;
-(id)venueLevel;
-(id)titlesForMapRect:(SCD_Struct_GE44)arg1;
-(id)address;
-(id)name;

@end

