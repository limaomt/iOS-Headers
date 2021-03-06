//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GKPreferences : NSObject
{
    BOOL _shouldSynchronizeOnNextRead;
    BOOL _webKitInspectElementEnabled;
    NSDictionary *_overrideValues;
}

+ (id)displayNameForEnvironment:(int)arg1;
+ (id)hostNameForEnvironment:(int)arg1;
+ (id)sharedPreferences;
@property(copy) NSDictionary *overrideValues; // @synthesize overrideValues=_overrideValues;
@property(nonatomic, getter=isWebKitInspectElementEnabled) BOOL webKitInspectElementEnabled; // @synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled;
@property(nonatomic) BOOL _shouldSynchronizeOnNextRead; // @synthesize _shouldSynchronizeOnNextRead;
@property(nonatomic, getter=isComprehensiveLoggingEnabled) BOOL comprehensiveLoggingEnabled;
@property(readonly, nonatomic) BOOL HTTPShouldUsePipelining;
@property(readonly, nonatomic) unsigned int exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property(readonly, nonatomic) unsigned int exchangeDataDefaultMaximumSize;
@property(readonly, nonatomic) unsigned int maxDefaultGameStateSizeTurnBased;
@property(readonly, nonatomic) unsigned int maxDefaultPlayersTurnBased;
@property(readonly, nonatomic) unsigned int maxDefaultPlayersHosted;
@property(readonly, nonatomic) unsigned int maxDefaultPlayersP2P;
@property(nonatomic) BOOL shouldAddPlayerInfoToAddressBook;
@property(nonatomic) BOOL shouldAllowNearbyMultiplayer;
@property(nonatomic) BOOL shouldUseSandboxServer;
@property(readonly, nonatomic) BOOL shouldDisallowInvitesFromStrangers;
@property(nonatomic) BOOL shouldAllowGameInvites;
@property(nonatomic) BOOL shouldLinkPlayerToFacebook;
@property(nonatomic) BOOL shouldLinkPlayerToTwitter;
@property(nonatomic) BOOL shouldLinkPlayerToICloud;
@property(nonatomic) BOOL shouldUseTestIcons;
@property(nonatomic) BOOL shouldTrackAtlasImageUsage;
@property(nonatomic) BOOL shouldAnnotateImageUsage;
@property(nonatomic) double cacheTTLOverride;
@property(nonatomic) double minimumCacheTTL;
@property(nonatomic) double garbageCollectionInterval;
@property(nonatomic) double terminationInterval;
@property(nonatomic) BOOL useInternalHeader;
@property(nonatomic) unsigned int exchangeMaxInitiatedExchangesPerPlayer;
@property(nonatomic) unsigned int exchangeDataMaximumSize;
@property(nonatomic) unsigned int maxGameStateSizeTurnBased;
@property(nonatomic) unsigned int maxPlayersTurnBased;
@property(nonatomic) unsigned int maxPlayersHosted;
@property(nonatomic) unsigned int maxPlayersP2P;
@property(nonatomic) int pipeliningSetting;
@property(nonatomic) int pushEnvironment;
@property(nonatomic) BOOL preemptiveRelay;
@property(nonatomic) BOOL forceRelay;
@property(nonatomic) unsigned long logFilter;
@property(nonatomic) BOOL verboseLogging;
@property(nonatomic) BOOL notificationAlertsEnabled;
@property(nonatomic) BOOL notificationSoundsEnabled;
@property(nonatomic) BOOL notificationBadgesEnabled;
@property(nonatomic, getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property(nonatomic) double debugRequestTimeout;
@property(nonatomic) unsigned int operationRetryCount;
@property(nonatomic) double operationRetryDelay;
@property(nonatomic) double operationTimeout;
@property(nonatomic) unsigned int loginDisableThreshold;
@property(nonatomic) unsigned int mescalSetupRetries;
@property(nonatomic) BOOL useTestProtocols;
@property(nonatomic) BOOL allowUnsignedBag;
@property(retain, nonatomic) NSString *storeBagURL;
@property(nonatomic) int environment;
- (void)removeOverrideForKey:(id)arg1;
- (void)setStringValue:(id)arg1 forKey:(struct __CFString *)arg2;
- (id)stringValueForKey:(struct __CFString *)arg1 defaultValue:(id)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString *)arg2;
- (double)timeIntervalForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;
- (void)setUnsignedIntegerValue:(int)arg1 forKey:(struct __CFString *)arg2;
- (int)unsignedIntegerValueForKey:(struct __CFString *)arg1 defaultValue:(int)arg2;
- (void)setIntegerValue:(int)arg1 forKey:(struct __CFString *)arg2;
- (int)integerValueForKey:(struct __CFString *)arg1 defaultValue:(int)arg2;
- (void)setBooleanValue:(BOOL)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)booleanValueForKey:(struct __CFString *)arg1;
- (BOOL)booleanValueForKey:(struct __CFString *)arg1 defaultValue:(BOOL)arg2;
- (id)preferencesValueForKey:(id)arg1;
- (void)applicationWillEnterBackground:(id)arg1;
- (void)_didWriteKey:(struct __CFString *)arg1;
- (void)synchronize;
- (void)invalidate;
- (BOOL)isInternalBuild;
- (void)dealloc;
- (id)init;
- (id)initWithoutUIKitNotifications;
- (id)initWithUIKitNotifications;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (BOOL)restrictionEnabledForKey:(id)arg1;
@property(readonly, nonatomic, getter=isGameCenterRestricted) BOOL gameCenterRestricted;
@property(readonly, nonatomic, getter=isAccountModificationRestricted) BOOL accountModificationRestricted;
@property(readonly, nonatomic, getter=isAppInstallationRestricted) BOOL appInstallationRestricted;
@property(readonly, nonatomic, getter=isAddingFriendsRestricted) BOOL addingFriendsRestricted;
@property(readonly, nonatomic, getter=isMultiplayerGamingRestricted) BOOL multiplayerGamingRestricted;
@property(readonly, nonatomic, getter=isStoreDemoModeEnabled) BOOL storeDemoModeEnabled;
@property(nonatomic) id <GKPreferencesDelegate> preferencesDelegate;

@end

