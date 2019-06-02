#import <Home/HFDemoModeAccessoryManager.h>
#import <Home/HFGenericAccessoryItem.h>
#import <Home/HFImageIconDescriptor.h>
#import <Home/HFMultistateImageIconDescriptor.h>
#import <Home/HFPrimaryStateIconDescriptor.h>
#import <Home/HFIncrementalStateIconDescriptor.h>
#import <Home/HFTemperatureIconDescriptor.h>
#import <Home/HFSecuritySystemIconDescriptor.h>
#import <Home/HFCharacteristicTriggerBuilder.h>
#import <Home/HFTriggerAnonymousActionSetBuilder.h>
#import <Home/HFSimpleAggregatedCharacteristicValueSource.h>
#import <Home/HFResidentDeviceStatusDetailsItemProvider.h>
#import <Home/HFBlindsStatusItem.h>
#import <Home/HFDataAnalyticsModule.h>
#import <Home/HFResidentDeviceItem.h>
#import <Home/HFColorCollection.h>
#import <Home/HFSecurityServiceItem.h>
#import <Home/_HFItemManagerDebugStateDumpController.h>
#import <Home/HFSetupSingleAccessoryPairingController.h>
#import <Home/HFThermostatServiceItem.h>
#import <Home/HFCharacteristicValueSet.h>
#import <Home/HFOutgoingHomeInvitationItem.h>
#import <Home/_HFCompoundConditionMatch.h>
#import <Home/HFConditionCollection.h>
#import <Home/HFPresenceEventFormatter.h>
#import <Home/HFAccessorySettingOptionItem.h>
#import <Home/HFLocationSensingCoordinator.h>
#import <Home/HFAccessorySettingItem.h>
#import <Home/HFSelectedRoomItemProvider.h>
#import <Home/HFStaticItem.h>
#import <Home/HFUtilities.h>
#import <Home/HFPowerStateTargetValueTuple.h>
#import <Home/HFPowerStateControlItem.h>
#import <Home/HFFaucetServiceItem.h>
#import <Home/HFSimpleIncrementalControlItem.h>
#import <Home/HFHomeItem.h>
#import <Home/HFAccessorySettingMusicAdapter.h>
#import <Home/HFWiFiExecutionEnvironmentObserver.h>
#import <Home/HFPresenceCondition.h>
#import <Home/HFLocationManagerDispatcher.h>
#import <Home/HFCameraAudioManager.h>
#import <Home/HFUserNotificationServiceTopicItemProvider.h>
#import <Home/HFHumiditySensorServiceItem.h>
#import <Home/HFTemperatureUnitControlItem.h>
#import <Home/HFServiceIconSet.h>
#import <Home/HFServiceIconFactory.h>
#import <Home/HFValueSetFormatter.h>
#import <Home/HFAccessorySettingDataAnalyticsAdapter.h>
#import <Home/HFAccessoryBatteryLevelItem.h>
#import <Home/HFProgrammableSwitchAccessoryItem.h>
#import <Home/HFItemBuilder.h>
#import <Home/HFServiceIconItemProvider.h>
#import <Home/HFMeasurementFormatter.h>
#import <Home/HFContactStore.h>
#import <Home/HFAccessorySettingSiriLanguageAdapter.h>
#import <Home/HFOpenURLRouter.h>
#import <Home/HFFanServiceItem.h>
#import <Home/HFUserHandle.h>
#import <Home/HFMediaDispatcher.h>
#import <Home/HFSelectedUserCollection.h>
#import <Home/HFFormattedTimeRemainingValue.h>
#import <Home/HFSimpleFormattedValue.h>
#import <Home/_HFObservedAccessorySettingState.h>
#import <Home/HFAccessorySettingAdapter.h>
#import <Home/HFUserItemProvider.h>
#import <Home/HFAccessorySettingDefaultAdapterCollection.h>
#import <Home/HFIncrementalStateControlItem.h>
#import <Home/HFActionSetItemProvider.h>
#import <Home/HFServiceIconItem.h>
#import <Home/HFCharacteristicValueManager.h>
#import <Home/HFActionSetSuggestionItem.h>
#import <Home/HFMediaAccessControlEditorItemModule.h>
#import <Home/HFHomePodAlarmControlItem.h>
#import <Home/HFAccessoryBuilder.h>
#import <Home/HFActionBuilder.h>
#import <Home/HFCharacteristicWriteActionBuilder.h>
#import <Home/HFItemSection.h>
#import <Home/HFMutableItemSection.h>
#import <Home/HFOutgoingHomeInvitationItemProvider.h>
#import <Home/HFURLItem.h>
#import <Home/HFSetupPairingControllerUtilities.h>
#import <Home/HFNoRemoteAccessStatusDetailsItem.h>
#import <Home/HFDiscoveredAccessory.h>
#import <Home/HFControlItem.h>
#import <Home/HFControlItemCharacteristicOptions.h>
#import <Home/HFFanStatusItem.h>
#import <Home/HFColorPaletteColor.h>
#import <Home/HFAccessorySettingAdapterManager.h>
#import <Home/HFAbstractRangeStatusItem.h>
#import <Home/HFTemperatureColorProfile.h>
#import <Home/HFActionSetSuggestionItemProvider.h>
#import <Home/HFUserNameFormatter.h>
#import <Home/HFAccessoryInfoItem.h>
#import <Home/HFHomePodAlarmItemManager.h>
#import <Home/HFSwingModeControlItem.h>
#import <Home/HFAccessorySettingGroupItem.h>
#import <Home/HFDataAnalyticsLogItemManager.h>
#import <Home/HFChildServiceFilter.h>
#import <Home/HFChildServiceControlItem.h>
#import <Home/_HFMediaValueManagerTransaction.h>
#import <Home/HFMediaValueManager.h>
#import <Home/HFErrorHandler.h>
#import <Home/HFRelativePercentValue.h>
#import <Home/HFServiceGroupItemProvider.h>
#import <Home/HFExecutionEnvironment.h>
#import <Home/HFContactController.h>
#import <Home/HFRoomItem.h>
#import <Home/HFItem.h>
#import <Home/HFSecurityStatusItem.h>
#import <Home/HFURLComponents.h>
#import <Home/HFFirmwareUpdateStatusItem.h>
#import <Home/HFRoomItemProvider.h>
#import <Home/HFIrrigationSystemServiceItem.h>
#import <Home/HFRangeControlItem.h>
#import <Home/HFTemperatureThresholdControlItem.h>
#import <Home/HFHeaterCoolerThresholdControlItem.h>
#import <Home/HFHumidifierDehumidifierThresholdControlItem.h>
#import <Home/HFRangeControlItemValue.h>
#import <Home/HFTemperatureThresholdValue.h>
#import <Home/HFServiceItemProvider.h>
#import <Home/HFCurrentZonesItem.h>
#import <Home/HFValveServiceItem.h>
#import <Home/HFNumberRange.h>
#import <Home/HFTemperatureSensorServiceItem.h>
#import <Home/HFSymptomFixManager.h>
#import <Home/HFItemUpdateOutcome.h>
#import <Home/HFMutableItemUpdateOutcome.h>
#import <Home/HFSetupAutomaticDiscoveryPairingController.h>
#import <Home/HFAccessoryInfoDetailsItemProvider.h>
#import <Home/HFDemoModeAccessoryItemProvider.h>
#import <Home/HFDemoModeMediaControlItem.h>
#import <Home/HFMediaControlItem.h>
#import <Home/HFAirPurifierServiceItem.h>
#import <Home/HFStatusItemProvider.h>
#import <Home/HFMediaAccessControlDescriptor.h>
#import <Home/HFControlPanelItemProvider.h>
#import <Home/HFOutletServiceItem.h>
#import <Home/HFCharacteristicValueDisplayError.h>
#import <Home/HFCharacteristicValueDisplayMetadata.h>
#import <Home/HFSimpleItemManager.h>
#import <Home/HFAccessoriesToReadSet.h>
#import <Home/HFCharacteristicReadLogger.h>
#import <Home/HFTimerTriggerTimeEventAdapter.h>
#import <Home/HFTimerTriggerSignificantTimeEventAdapter.h>
#import <Home/HFTimerTriggerCalendarEventAdapter.h>
#import <Home/HFControlPanelItem.h>
#import <Home/HFServiceDescriptor.h>
#import <Home/HFSelectableRoomTransformItem.h>
#import <Home/HFFormatterManager.h>
#import <Home/HFMultiStateControlItem.h>
#import <Home/HFMultiStateValueSet.h>
#import <Home/_HFDeletableTransformItem.h>
#import <Home/HFZoneModule.h>
#import <Home/HFSimpleDiffableItemGroup.h>
#import <Home/HFGroupedItemDiff.h>
#import <Home/HFGroupDiffOperation.h>
#import <Home/HFItemDiffOperation.h>
#import <Home/HFMediaSystemBuilder.h>
#import <Home/HFCameraItemProvider.h>
#import <Home/HFSetupAccessoryResult.h>
#import <Home/HFServiceActionItem.h>
#import <Home/HFSensorServiceItem.h>
#import <Home/HFAggregatedCharacteristicReadPolicy.h>
#import <Home/HFMutableAggregatedCharacteristicReadPolicy.h>
#import <Home/HFStandardReadPolicy.h>
#import <Home/HFCachedValueReadPolicy.h>
#import <Home/HFNotSupportedReadPolicy.h>
#import <Home/HFStaticReadPolicy.h>
#import <Home/HFBlockBasedReadPolicy.h>
#import <Home/HFLegacyBlockBasedReadPolicy.h>
#import <Home/HFMediaAccessoryItemProvider.h>
#import <Home/HFTransformItemProvider.h>
#import <Home/_HFMediaAccessoryProfileItemTuple.h>
#import <Home/HFAccessorySettingsItemProvider.h>
#import <Home/HFCharacteristicValueTransaction.h>
#import <Home/HFStateRestorationSettings.h>
#import <Home/HFDoorServiceItem.h>
#import <Home/HFNullValueSource.h>
#import <Home/HFTimerTriggerBuilder.h>
#import <Home/HFServiceGroupBuilder.h>
#import <Home/HFItemProviderReloadResults.h>
#import <Home/HFItemProvider.h>
#import <Home/HFWallpaperEditCollection.h>
#import <Home/HFWallpaperEditCollectionBuilder.h>
#import <Home/HFUserNotificationCenter.h>
#import <Home/HFConcreteTimeTriggerBuilder.h>
#import <Home/HFEventBasedTimeTriggerBuilder.h>
#import <Home/HFTimerBasedTimeTriggerBuilder.h>
#import <Home/_HFItemUpdateFutureWrapper.h>
#import <Home/HFItemManagerDelegateUpdateRequest.h>
#import <Home/_HFItemUpdateRequestContext.h>
#import <Home/HFItemManager.h>
#import <Home/HFWindowServiceItem.h>
#import <Home/HFHomeAppInstallController.h>
#import <Home/HFAlarmDiff.h>
#import <Home/HFPresenceConditionItem.h>
#import <Home/HFThermostatItemUtilities.h>
#import <Home/HFUpdateLoggerDebuggingController.h>
#import <Home/HFUpdateLogger.h>
#import <Home/HFAccessorySettingManagedConfigurationAdapter.h>
#import <Home/HFCharacteristicStateItem.h>
#import <Home/HFSymptomStatusItem.h>
#import <Home/HFDebugStateDumpManager.h>
#import <Home/HFWallpaperLegacyFileManager.h>
#import <Home/HFHumidifierDehumidifierServiceItem.h>
#import <Home/HFOutletStatusItem.h>
#import <Home/HFStaticItemProvider.h>
#import <Home/HFResidentDeviceStatusDetailsItem.h>
#import <Home/HFUserItem.h>
#import <Home/HFBlindsServiceItem.h>
#import <Home/HFWallpaperFileManager.h>
#import <Home/HFServiceStateDescriptionFormatter.h>
#import <Home/HFGarageDoorOpenerServiceItem.h>
#import <Home/HFAccessoryBuilderItem.h>
#import <Home/HFAbstractBinaryStatusItem.h>
#import <Home/HFRoomBuilderItem.h>
#import <Home/HFActionSetValueSource.h>
#import <Home/HFTemperatureUnitCoordinator.h>
#import <Home/HFLocationTriggerBuilder.h>
#import <Home/HFHomeBuilder.h>
#import <Home/HFServiceLikeItemUpdateResponse.h>
#import <Home/HFServiceLikeItemUpdateRequest.h>
#import <Home/HFServiceLikeItemResultFactory.h>
#import <Home/HFLightbulbStatusItem.h>
#import <Home/HFTriggerItem.h>
#import <Home/HFUserNotificationServiceTopic.h>
#import <Home/HFBridgeItemProvider.h>
#import <Home/HFHomePropertyCacheManager.h>
#import <Home/HFSwitchStatusItem.h>
#import <Home/HFMediaAccessoryItemUpdateRequest.h>
#import <Home/HFMediaAccessoryItemUpdateResponse.h>
#import <Home/_HFNamespaceAndSharedCachePolluter.h>
#import <Home/HFControlPanelItemSingleControlRule.h>
#import <Home/HFPercentFormatter.h>
#import <Home/HFColorPalette.h>
#import <Home/HFMutableColorPalette.h>
#import <Home/HFRoomSuggestion.h>
#import <Home/HFDefaultRoomSuggestionVendor.h>
#import <Home/HFDemoModeAccessory.h>
#import <Home/HFActionSetListItem.h>
#import <Home/HFTargetRangeUtilities.h>
#import <Home/HFHumidityStatusItem.h>
#import <Home/HFItemUpdateRequest.h>
#import <Home/HFCondition.h>
#import <Home/HFUnknownCondition.h>
#import <Home/HFAccessoryBrowsingManager.h>
#import <Home/HFAssociatedServiceTypeOptionItem.h>
#import <Home/HFAssociatedServiceTypeOptionItemProvider.h>
#import <Home/HFFaucetActiveStateControlItem.h>
#import <Home/_HFMediaProfileContainerSettingsWriteValueTransaction.h>
#import <Home/HFMediaProfileContainerSettingsValueManager.h>
#import <Home/HFRGBColor.h>
#import <Home/HFTemperatureColor.h>
#import <Home/HFItemModule.h>
#import <Home/HFDemoModeAccessoryItem.h>
#import <Home/HFResidentDeviceStatusItem.h>
#import <Home/HFZoneItem.h>
#import <Home/HFUnreachableStatusItem.h>
#import <Home/HFHomeStatusItemManager.h>
#import <Home/HFAirPurifierStatusItem.h>
#import <Home/HFUserNotificationServiceSettings.h>
#import <Home/HFMutableUserNotificationServiceSettings.h>
#import <Home/HFAbstractAlarmStatusItem.h>
#import <Home/HFCarbonMonoxideAlarmStatusItem.h>
#import <Home/HFCarbonDioxideAlarmStatusItem.h>
#import <Home/HFSmokeAlarmStatusItem.h>
#import <Home/HFLeakAlarmStatusItem.h>
#import <Home/HFMotionAlarmStatusItem.h>
#import <Home/HFOccupancyAlarmStatusItem.h>
#import <Home/HFHeaterCoolerServiceItem.h>
#import <Home/HFServiceState.h>
#import <Home/HFFaucetValveServiceState.h>
#import <Home/HFIrrigationValveServiceState.h>
#import <Home/HFIrrigationSystemServiceState.h>
#import <Home/HFAccessorySettingDeviceOptionsAdapter.h>
#import <Home/HFAbstractDoorAndWindowStatusItem.h>
#import <Home/HFDoorStatusItem.h>
#import <Home/HFWindowStatusItem.h>
#import <Home/HFContactSensorStatusItem.h>
#import <Home/HFDataAnalyticsLogItemProvider.h>
#import <Home/HFCharacteristicNotificationManager.h>
#import <Home/HFCharacteristicReadResponse.h>
#import <Home/HFFormatterTransformer.h>
#import <Home/HFTargetModeControlItem.h>
#import <Home/HFTargetControlAccessoryItem.h>
#import <Home/HFZoneBuilderItem.h>
#import <Home/HFZoneSuggestionItemProvider.h>
#import <Home/HFResidentDeviceItemProvider.h>
#import <Home/HFCameraManager.h>
#import <Home/HFItemManagerBatchedDelegateAdapter.h>
#import <Home/HFLockMechanismServiceItem.h>
#import <Home/HFDemoModeAccessoryBuilder.h>
#import <Home/HFServiceGroupItem.h>
#import <Home/HFProgrammableSwitchItemProvider.h>
#import <Home/HFTargetControlItemProvider.h>
#import <Home/HFCroppedWallpaperInfo.h>
#import <Home/HFWallpaper.h>
#import <Home/HFWallpaperSlice.h>
#import <Home/HFCharacteristicBatchReadResponse.h>
#import <Home/HFOverrideCharacteristicValueSource.h>
#import <Home/HFHomePodAlarmItemProvider.h>
#import <Home/HFListFormatter.h>
#import <Home/HFStatusItem.h>
#import <Home/HFLightSensorServiceItem.h>
#import <Home/HFValueTransformer.h>
#import <Home/HFActionSetBuilder.h>
#import <Home/HFTimeConditionItem.h>
#import <Home/HFCharacteristicCondition.h>
#import <Home/HFTransformItem.h>
#import <Home/HFHomeKitTransformItem.h>
#import <Home/HFGarageDoorOpenerStatusItem.h>
#import <Home/HFServiceBuilder.h>
#import <Home/HFWallpaperManager.h>
#import <Home/HFWallpaperHomeKitObjectKey.h>
#import <Home/HFHomeSettingsVisibilityArbitrator.h>
#import <Home/HFPrimaryStateControlItem.h>
#import <Home/HFHomePodAlarmItem.h>
#import <Home/HFDictionaryCombinator.h>
#import <Home/HFNumberRangeFormatter.h>
#import <Home/HFServiceActionItemProvider.h>
#import <Home/HFWallpaperImageCache.h>
#import <Home/HFAccessoryInvitationServiceItemProvider.h>
#import <Home/HFMediaAccessControlEditorItemProvider.h>
#import <Home/HFAccessoryBatteryStatusItem.h>
#import <Home/HFLockStatusItem.h>
#import <Home/HFCameraItem.h>
#import <Home/HFHomeItemProvider.h>
#import <Home/HFMediaAccessControlItem.h>
#import <Home/HFAccessorySettingMobileTimerAdapter.h>
#import <Home/HFDynamicListString.h>
#import <Home/HFSwitchServiceItem.h>
#import <Home/HFCharacteristicGroup.h>
#import <Home/HFLightbulbServiceItem.h>
#import <Home/HFStateDumpBuilder.h>
#import <Home/HFStateDumpEntry.h>
#import <Home/HFStateDumpBuilderContext.h>
#import <Home/HFMutableStateDumpBuilderContext.h>
#import <Home/HFTimeIntervalFormatter.h>
#import <Home/HFNumberValueConstraints.h>
#import <Home/HFTriggerBuilder.h>
#import <Home/HFDiscoveredAccessoryItemProvider.h>
#import <Home/HFValveActiveStateControlItem.h>
#import <Home/HFConditionItemProvider.h>
#import <Home/HFUniqueArrayDiffOptions.h>
#import <Home/_HFSetContainer.h>
#import <Home/HFUniqueArrayDiff.h>
#import <Home/HFCharacteristicConditionItem.h>
#import <Home/HFTimeCondition.h>
#import <Home/HFTimeRangeCondition.h>
#import <Home/HFSunriseSunsetCondition.h>
#import <Home/HFDateComponentsCondition.h>
#import <Home/HFZoneBuilder.h>
#import <Home/HFAppleMusicAccountOperations.h>
#import <Home/_HFAppleMusicAccountArbitrationActionItem.h>
#import <Home/HFAppleMusicAccountArbitrator.h>
#import <Home/HFColorControlItem.h>
#import <Home/HFRoomSuggestionItemProvider.h>
#import <Home/HFSetDiff.h>
#import <Home/HFMutableSetDiff.h>
#import <Home/HFDiscoveredAccessoryItem.h>
#import <Home/_HFSettingsObserverTuple.h>
#import <Home/HFTriggerDurationSummaryItem.h>
#import <Home/HFHomePodAlarmItemModule.h>
#import <Home/HFRoomBuilder.h>
#import <Home/HFZoneItemProvider.h>
#import <Home/HFOrderedHomeKitItemData.h>
#import <Home/HFReorderableHomeKitItemList.h>
#import <Home/HFMutableReorderableHomeKitItemList.h>
#import <Home/HFActionSetItem.h>
#import <Home/HFMediaAccessControlEditorItemManager.h>
#import <Home/HFUnknownConditionItem.h>
#import <Home/HFAirQualitySensorStatusItem.h>
#import <Home/HFServiceBuilderItem.h>
#import <Home/HFHomeAppInstallStateArbiter.h>
#import <Home/HFAccessorySettingsEntity.h>
#import <Home/HFCharacteristicStateItemProvider.h>
#import <Home/HFEventBuilder.h>
#import <Home/HFLocationRegionEventBuilder.h>
#import <Home/HFPresenceEventBuilder.h>
#import <Home/HFDurationEventBuilder.h>
#import <Home/HFCalendarEventBuilder.h>
#import <Home/HFSignificantTimeEventBuilder.h>
#import <Home/HFSimpleFormatter.h>
#import <Home/HFTemperatureStatusItem.h>
#import <Home/HFSiriLanguageOption.h>
#import <Home/HFHomeKitDispatcher.h>
#import <Home/HFServiceItem.h>
#import <Home/HFMediaAccessoryItem.h>
#import <Home/HFDataAnalyticsLogItem.h>
#import <Home/HFUserNotificationServiceTopicItem.h>
#import <Home/HFAccessorySettingProfilesFormatter.h>
#import <Home/HFAccessorySettingFormatterFactory.h>
#import <Home/HFServiceTreeTypePredicate.h>
#import <Home/HFServiceTreeCompoundPredicate.h>
#import <Home/HFServiceStateCharacteristicMatchResult.h>
#import <Home/HFServiceStateCharacteristicRecipe.h>
#import <Home/HFServiceStateRecipe.h>
#import <Home/HFAccessoryItem.h>
#import <Home/HFGenericAccessoryItemProvider.h>
#import <Home/HFServiceNameComponents.h>
#import <Home/HFTriggerItemProvider.h>
#import <Home/HFSynchronizedTimer.h>
