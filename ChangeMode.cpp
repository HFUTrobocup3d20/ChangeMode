void WorldModel::ChangePlayMode()
{
    int PlayMode = getPlayMode();
    if (getSide() == SIDE_RIGHT)
    {
        //setSide(SIDE_LEFT);
        if (PlayMode == PM_KICK_OFF_RIGHT || PlayMode == PM_KICK_IN_RIGHT || PlayMode == PM_GOAL_RIGHT || PlayMode == PM_CORNER_KICK_RIGHT ||
            PlayMode == PM_GOAL_KICK_RIGHT || PlayMode == PM_OFFSIDE_RIGHT || PlayMode == PM_FREE_KICK_RIGHT || PlayMode == PM_DIRECT_FREE_KICK_RIGHT ||
            PlayMode == PM_PASS_RIGHT)
        {
            setPlayMode(PlayMode - 1);
        }
        if (PlayMode == PM_KICK_OFF_LEFT || PlayMode == PM_KICK_IN_LEFT || PlayMode == PM_GOAL_LEFT || PlayMode == PM_CORNER_KICK_LEFT ||
            PlayMode == PM_GOAL_KICK_LEFT || PlayMode == PM_OFFSIDE_LEFT || PlayMode == PM_FREE_KICK_LEFT || PlayMode == PM_DIRECT_FREE_KICK_LEFT ||
            PlayMode == PM_PASS_LEFT)
        {
            setPlayMode(PlayMode + 1);
        }
    }
}